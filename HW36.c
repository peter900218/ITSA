#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct node{

    double x;
    double y;

    int selected; // 0 or 1 select or not

}node[100000];

struct link{

    int start;  //node�Ĵ�̖
    int end;  //node�Ĵ�̖

    double distance; //���x
    double sinr;  // N*d^3/P

}link[100000];  //�c�c�c���B��

int main()
{
    int num_nodes,num_links;
    int power,noise;

    scanf("%d %d %d %d",&num_nodes,&num_links,&power,&noise);
    for(int i=0;i<num_nodes;i++)
    {
        int node_id;
        scanf("%d %lf %lf",&node_id,&node[i].x,&node[i].y);  //point, x, y
    }
    for(int i=0;i<num_links;i++)
    {
        int link_id;
        scanf("%d %d %d",&link_id,&link[i].start,&link[i].end);

        link[i].distance = sqrt( pow( abs( node[link[i].start].x-node[link[i].end].x ),2 ) + pow( abs( node[link[i].start].y-node[link[i].end].y ),2 ) );  //distance (x1,y1)and (x2,y2)
        link[i].sinr = noise * pow(link[i].distance,3) / power;  //N*d^3/P
    }

    int stored[100000]; //store link_id
    int number; //the number of link_id in stored

    for(int i=0;i<num_links;i++)
    {
        if( link[i].sinr < 1 ) //add some limit or not  //the first one be added
        {
            stored[0]=i; //i is link_id in stored[0]
            number=1;
            node[link[i].start].selected=1; //the node is selected and it can not be select later
            node[link[i].end].selected=1;
            break;
        }
        else
            continue;
    } //find the first node to in stored[0] and the node's N*d^3/P < 1

    //���Д��l�]��ָ�� ���Д�sinr

    for(int i=stored[0]+1;i<num_links;i++)  //iҪ���Mȥ  //i=stored[0]+1 ���ǰ����sinr�Բ�����
    {
        if( node[link[i].start].selected==1 || node[link[i].end].selected==1 )
            continue;  //�Д�i֮ǰ�Л]��ָ�����  if yes=> ������i  //��ָ���i���܈���

        int j;

        double di_plus; //for i, the other head to i's end
        double dj_plus; //for j, the other head to j's end

        for(j=0;j<number;j++) //stored[j] //�Д����ÿ��stored[j]���f��i�Ƿ����sinr
        {
            di_plus= sqrt( pow( abs( node[link[i].end].x-node[link[stored[j]].start].x ),2 ) + pow( abs( node[link[i].end].y-node[link[stored[j]].start].y ),2 ) );
            dj_plus= sqrt( pow( abs( node[link[stored[j]].end].x-node[link[i].start].x ),2 ) + pow( abs( node[link[stored[j]].end].y-node[link[i].start].y ),2 ) );
            // di_plus: other link for i  dj_plus: other link for stored[j]
            link[stored[j]].sinr= link[stored[j]].sinr + pow(link[stored[j]].distance,3)/pow(dj_plus,3);
            link[i].sinr= link[i].sinr + pow(link[i].distance,3)/pow(di_plus,3);
            //calculator sinr
            if( link[stored[j]].sinr>=1 || link[i].sinr>=1 ) //if stored[j] or i ������sinr
            {
                for(int k=0;k<=j;k++) //߀ԭԭ��
                {
                    di_plus= sqrt( pow( abs( node[link[i].end].x-node[link[stored[k]].start].x ),2 ) + pow( abs( node[link[i].end].y-node[link[stored[k]].start].y ),2 ) );
                    dj_plus= sqrt( pow( abs( node[link[stored[k]].end].x-node[link[i].start].x ),2 ) + pow( abs( node[link[stored[k]].end].y-node[link[i].start].y ),2 ) );

                    link[stored[k]].sinr= link[stored[k]].sinr - pow(link[stored[k]].distance,3)/pow(dj_plus,3);
                    link[i].sinr= link[i].sinr - pow(link[i].distance,3)/pow(di_plus,3);
                }

                break;
            }  //���Д�ÿ��stored�������� ���������^i ��������Ӌ�� ���չ�ʽ����һ��stored�����͛]��

        }

        if(j==number) //j���� stored[] ��ͨ�^
        {
            node[link[i].start].selected=1;  //�@���c�����و���ָ��
            node[link[i].end].selected=1;

            stored[number]=i; //i be stored in stored[]
            number++;
        }
    }

    printf("%d\n",number);
    for(int i=0;i<number;i++)
    {
        printf("%d %d %d\n",stored[i],link[stored[i]].start,link[stored[i]].end);
    }

}
