#include "cityraider.h"
#include "ui_cityraider.h"
#include <QDebug>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
#define MAX 100
#define N 520
#define E 7
#define inf 999999
float edge[N][N],disp[N];
float weight=0.00;
int w[N],num;
bool visited[N] = {false};
int *findpath(int start_point1, int end_point1 );
float CalWeight(int *s);
int comp(int a[],int b[],int n);
QStringList spot;
QStringList spot2;
QString rec;
CityRaider::CityRaider(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CityRaider)
{
    ui->setupUi(this);
    //spot 顶点表
    spot<<"陕西历史博物馆"<<"钟楼"<<"鼓楼"<<"西安火车站"<<"兵马俑";
}

CityRaider::~CityRaider()
{
    delete ui;
}
void CityRaiderMain();

static int in[5]={0};

/*西安火车站*/
void CityRaider::on_XianRailwayStation_QRB_clicked()
{
    if(ui->XianRailwayStation_QRB->isChecked())
    {
        ui->XianRailwayStation_Btn->setStyleSheet("image:url(:/images/XianRailwayStation2.png);");
        in[3]=1;
        CityRaiderMain();
        ui->RecommendedRoute->setText(rec);
    }
    else
    {
        ui->XianRailwayStation_Btn->setStyleSheet("image:url(:/images/XianRailwayStation.png);");
        in[3]=0;
        CityRaiderMain();
        ui->RecommendedRoute->setText(rec);
    }
}

void CityRaider::on_XianRailwayStation_Btn_clicked()
{
    if(ui->XianRailwayStation_QRB->isChecked())
    {
        ui->XianRailwayStation_Btn->setStyleSheet("image:url(:/images/XianRailwayStation.png);");
        ui->XianRailwayStation_QRB->setChecked(false);
        in[3]=0;
        CityRaiderMain();
        ui->RecommendedRoute->setText(rec);

    }
    else
    {
        ui->XianRailwayStation_Btn->setStyleSheet("image:url(:/images/XianRailwayStation2.png);");
        ui->XianRailwayStation_QRB->setChecked(true);
        in[3]=1;
        CityRaiderMain();
        ui->RecommendedRoute->setText(rec);

    }
}

/*兵马俑*/

void CityRaider::on_TerraCottaWarriors_QRB_clicked()
{
    if(ui->TerraCottaWarriors_QRB->isChecked())
    {
        ui->TerraCottaWarriors_Btn->setStyleSheet("image:url(:/images/TerraCottaWarriors2.png);");
        in[4]=1;
        CityRaiderMain();
        ui->RecommendedRoute->setText(rec);

    }
    else
    {
        ui->TerraCottaWarriors_Btn->setStyleSheet("image:url(:/images/TerraCottaWarriors.png);");
        in[4]=0;
        CityRaiderMain();
        ui->RecommendedRoute->setText(rec);

    }
}

void CityRaider::on_TerraCottaWarriors_Btn_clicked()
{
    if(ui->TerraCottaWarriors_QRB->isChecked())
    {
        ui->TerraCottaWarriors_Btn->setStyleSheet("image:url(:/images/TerraCottaWarriors.png);");
        ui->TerraCottaWarriors_QRB->setChecked(false);
        in[4]=0;
        CityRaiderMain();
        ui->RecommendedRoute->setText(rec);

    }
    else
    {
        ui->TerraCottaWarriors_Btn->setStyleSheet("image:url(:/images/TerraCottaWarriors2.png);");
        ui->TerraCottaWarriors_QRB->setChecked(true);
        in[4]=1;
        CityRaiderMain();
        ui->RecommendedRoute->setText(rec);

    }
}

/*陕历博*/

void CityRaider::on_ShaanxiHistoryMuseum_QRB_clicked()
{
    if(ui->ShaanxiHistoryMuseum_QRB->isChecked())
    {
        ui->ShaanxiHistoryMuseum_Btn->setStyleSheet("image:url(:/images/ShaanxiHistoryMuseum2.png);");
        in[0]=1;
        CityRaiderMain();
        ui->RecommendedRoute->setText(rec);

    }
    else
    {
        ui->ShaanxiHistoryMuseum_Btn->setStyleSheet("image:url(:/images/ShaanxiHistoryMuseum.png);");
        in[0]=0;
        CityRaiderMain();
        ui->RecommendedRoute->setText(rec);

    }
}

void CityRaider::on_ShaanxiHistoryMuseum_Btn_clicked()
{
    if(ui->ShaanxiHistoryMuseum_QRB->isChecked())
    {
        ui->ShaanxiHistoryMuseum_Btn->setStyleSheet("image:url(:/images/ShaanxiHistoryMuseum.png);");
        ui->ShaanxiHistoryMuseum_QRB->setChecked(false);
        in[0]=0;
        CityRaiderMain();
        ui->RecommendedRoute->setText(rec);

    }
    else
    {
        ui->ShaanxiHistoryMuseum_Btn->setStyleSheet("image:url(:/images/ShaanxiHistoryMuseum2.png);");
        ui->ShaanxiHistoryMuseum_QRB->setChecked(true);
        in[0]=1;
        CityRaiderMain();
        ui->RecommendedRoute->setText(rec);

    }
}

/*鼓楼*/

void CityRaider::on_DrumTower_QRB_clicked()
{
    if(ui->DrumTower_QRB->isChecked())
    {
        ui->DrumTower_Btn->setStyleSheet("image:url(:/images/DrumTower2.png);");
        in[2]=1;
        CityRaiderMain();
        ui->RecommendedRoute->setText(rec);

    }
    else
    {
        ui->DrumTower_Btn->setStyleSheet("image:url(:/images/DrumTower.png);");
        in[2]=0;
        CityRaiderMain();
        ui->RecommendedRoute->setText(rec);

    }
}

void CityRaider::on_DrumTower_Btn_clicked()
{
    if(ui->DrumTower_QRB->isChecked())
    {
        ui->DrumTower_Btn->setStyleSheet("image:url(:/images/DrumTower.png);");
        ui->DrumTower_QRB->setChecked(false);
        in[2]=0;
        CityRaiderMain();
        ui->RecommendedRoute->setText(rec);

    }
    else
    {
        ui->DrumTower_Btn->setStyleSheet("image:url(:/images/DrumTower2.png);");
        ui->DrumTower_QRB->setChecked(true);
        in[2]=1;
        CityRaiderMain();
        ui->RecommendedRoute->setText(rec);

    }
}

/*钟楼*/

void CityRaider::on_BellTower_QRB_clicked()
{
    if(ui->BellTower_QRB->isChecked())
    {
        ui->BellTower_Btn->setStyleSheet("image:url(:/images/BellTower2.png);");
        in[1]=1;
        CityRaiderMain();
        ui->RecommendedRoute->setText(rec);


    }
    else
    {
        ui->BellTower_Btn->setStyleSheet("image:url(:/images/BellTower.png);");
        in[1]=0;
        CityRaiderMain();
        ui->RecommendedRoute->setText(rec);

    }
}

void CityRaider::on_BellTower_Btn_clicked()
{
    if(ui->BellTower_QRB->isChecked())
    {
        ui->BellTower_Btn->setStyleSheet("image:url(:/images/BellTower.png);");
        ui->BellTower_QRB->setChecked(false);
        in[1]=0;
        CityRaiderMain();
        ui->RecommendedRoute->setText(rec);

    }
    else
    {
        ui->BellTower_Btn->setStyleSheet("image:url(:/images/BellTower2.png);");
        ui->BellTower_QRB->setChecked(true);
        in[1]=1;
        CityRaiderMain();
        ui->RecommendedRoute->setText(rec);

    }
}

int *findpath(int start_point1, int end_point1 )
 {
    int start_point=start_point1-1;
    int end_point=end_point1-1;
    int prev[N];//用来标注当前结点的上一个结点，以便输出两点间最短路线
    int count=0;
    fill(edge[0],edge[0] + N * N,inf);//注意这里要是N*N，要不然不是全部
    fill(disp,disp + N,inf);
    for(int i=0;i<5;i++)
    {
        visited[i]=false;
    }
    int n=5;//对应城市数，城市之间连线数
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        edge[i][j]=inf;
    }

    //1-陕历博 2-钟楼 3-鼓楼 4-西安站 5-兵马俑

    edge[0][1]=2.4; edge[1][0]=2.4;
    edge[0][2]=2.7;edge[2][0]=2.7;
    edge[0][3]=6.4; edge[3][0]=6.4;
    edge[0][4]=37.7; edge[4][0]=37.7;
    edge[1][2]=0.4;edge[2][1]=0.4;
    edge[1][3]=1.6; edge[3][1]=1.6;
    edge[1][4]=32.8; edge[4][1]=32.8;
    edge[3][4]=31.6; edge[4][3]=31.6;


    for(int i=0;i<N;i++){
        prev[i] = i;//初始状态设每个点的前驱为自身
        edge[i][i] = 0;
    }

    disp[start_point] = 0;
    for(int i = 0;i < n;i++){
        int u = -1,min = inf;
        for(int j = 0;j < n;j++){
            if(visited[j] == false && disp[j] <= min)
            {
                u = j;
                min = disp[j];
            }
        }

                if(u == -1)
                    break;

        visited[u] = true;
        for(int v = 0;v < n;v++){
            if(visited[v] == false && edge[u][v] != inf)
            {
                if(disp[u] + edge[u][v] < disp[v]){
                    disp[v] = disp[u] + edge[u][v];
                    prev[v] = u;//prev保存当前结点的上一个节点，以便输出最短路线
                }
            }
        }
    }

    stack<int> myStack;
    int i=0;
    int temp = end_point;
    myStack.push(end_point);//先加终点
    while(start_point != temp){
        temp = prev[temp];
        myStack.push(temp);//注意这里是把当前点的上一个结点放进去，此时换成了temp
    }


    while(!myStack.empty())
    {

        w[i+1]=myStack.top()+1; ++i; ++count;
        myStack.pop();
    }
    w[0]=count;
    return w;

}
float CalWeight(int *s)
{

    float weight=0;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            edge[i][j] = inf;
        }
    }

    edge[0][1]=2.4; edge[1][0]=2.4;
    edge[0][2]=2.7;edge[2][0]=2.7;
    edge[0][3]=6.4; edge[3][0]=6.4;
    edge[0][4]=37.7; edge[4][0]=37.7;
    edge[1][2]=0.4;edge[2][1]=0.4;
    edge[1][3]=1.6; edge[3][1]=1.6;
    edge[1][4]=32.8; edge[4][1]=32.8;
    edge[3][4]=31.6; edge[4][3]=31.6;


    for(int i=1;i<s[0];i++)
    {
        weight+=edge[s[i]-1][s[i+1]-1];
    }

    return weight;
}


int comp(int a[],int b[],int n){
    int count=0;
    int t=n;
    for(int i=0;i<t;i++,n--){
        if(a[i]==b[n-1]) count++;
    }
    if(count==t) return 1;
    else return 0;
}


void CityRaiderMain()
{
    int i,l=0,city=0;
    int arr_city[5];
    spot2.clear();
    rec.clear();
    for(i=0;i<5;i++)
    {
        qDebug() << in[i]  ;
    }
    for(i=0;i<5;i++)
    {
        if(in[i]==1)
        {
            arr_city[l++]=i+1;
            city++;
        }
    }
    for(i=0;i<city;i++)
    {
        qDebug()<< "arr_city[i]:";
        qDebug()<<arr_city[i]<<" ";
    }
    qDebug()<<"city:" << city <<endl;

    if(city<=1) return;
    int q,j=0,num=1,count;
    int tem;
    float w,temp=999999.9;
    int *path;
    int per[MAX][city];
    for(i=1;i<city+1;i++)
    {
        num=num*i;
    }
    num=num/2;
    float store[num];
    do
    {
        for(i=0,count=0;i<j;i++)
        {
            if(!comp(arr_city, per[i], city)) count++;
        }
        if(count==j)
        {
            memcpy(per[j],arr_city,sizeof(arr_city));j++;
        }
    }
    while(next_permutation(arr_city, arr_city+city));
    for(i=0;i<num;i++)
    {
        for(q=0,w=0;q<city-1;q++)
        {
            path=findpath(per[i][q], per[i][q+1]);
            w+=CalWeight(path);
        }
        store[i]=w;
    }
    for(i=0;i<num;i++)
    {
        if(store[i]<temp)
        {
           temp=store[i];tem=i;
        }
    }
    for(i=0;i<city-1;i++)
    {
        path=findpath(per[tem][i],per[tem][i+1]);
        for(q=1;q<path[0];q++)
        {
            qDebug()<<path[q]<<" ";
            spot2<<spot.at(path[q]-1);
        }
        if(i==city-2)
        {
           qDebug()<<path[path[0]]<<" ";
           spot2<<spot.at(path[q]-1);
        }
    }
    for(i=0;i<spot2.length();i++)
    {
        rec.append(spot2[i]);
        if(i!=( spot2.length()-1 )) rec.append("->");
    }

    qDebug() << rec ;
    qDebug() <<"最短距离为"<<temp;

}



