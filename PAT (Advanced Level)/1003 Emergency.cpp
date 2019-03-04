#include<iostream>
#include<algorithm>
using namespace std;
#define MAX 505   
#define NAN 1000000000  //初始化时两点之间最大距离

int n, m, start, ed;
int num = 0;	//计算最短路径相等的路径条数
int dis[MAX][MAX] = {0};  //距离矩阵
int team[MAX] = {0}; //团队人数

//最短路径
/*
	minPath[i][0]：起点到该点最短路径的前驱
	minPath[i][1]：起点到该点的最短路径长度
	minPath[i][2]：起点到该点的最短路径人数总和
	minPath[i][3]：起点到该点的最短路径条数
*/
int minPath[MAX][4];  

int minDis = NAN;
int people_Max = 0;
bool u[MAX] = {false};	//是否属于U

void Dijkstra(){
	int a = start;
	minPath[a][1] = 0;	//起点到起点的距离为0
	minPath[a][2] = team[start];	
	minPath[a][3] = 1;	
	u[a] = true;

	for(int j = 0 ; j < n ; j++){
		u[a] = true;
		int minDis_temp = NAN;

		for(int i = 0 ; i < n ; i++ ){
			if(u[i] == false && dis[a][i] != NAN){
				if(dis[a][i] + minPath[a][1] < minPath[i][1]){
					//更新最短路径
					//printf("**%d %d\n", a, i);
					minPath[i][0] = a;
					minPath[i][1] = dis[a][i] + minPath[a][1];
					minPath[i][2] = minPath[a][2] + team[i];
					minPath[i][3] = minPath[a][3];
				}
				else if(dis[a][i] + minPath[a][1] == minPath[i][1]){
					//更新路径条数
					minPath[i][3] += minPath[a][3];
					//更新最大人数
					if(minPath[i][2] < minPath[a][2] + team[i])
						minPath[i][2] = minPath[a][2] + team[i];
				}
			}
		}
		
		for(int i = 0 ; i < n ; i++){
			if(minPath[i][1] < minDis_temp && u[i] == false){
				minDis_temp = minPath[i][1];
				a = i;
			}
		}

	}

	minDis = minPath[ed][1];
	people_Max = minPath[ed][2];
	num = minPath[ed][3];
}

int main(){
	scanf("%d %d %d %d", &n, &m, &start, &ed);
	
	for(int i = 0 ; i < n ; i++){
		int r;
		scanf("%d", &r);
		team[i] = r;
	}

	for(int i = 0 ; i < n ; i++){
		//初始化最短路径
		minPath[i][0] = start;  
		minPath[i][1] = NAN;
		minPath[i][2] = 0;
		minPath[i][3] = 0;
	}
	fill(dis[0], dis[0] + MAX * MAX, NAN);
	/*
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < m ; j++){
			//初始化距离矩阵
			dis[i][j] = NAN;
		}
	}
	*/

	for(int k = 0 ; k < m ; k++){
		int i, j, len;
		scanf("%d %d %d", &i, &j, &len);
		dis[i][j] = len;
		dis[j][i] = len;
	}

	Dijkstra();
	//printf("pre = %d ", minPath[ed][0] );
	//printf("minDis = %d num = %d people_Max = %d", minDis, num, people_Max);
	if(minDis == NAN)
		printf("0 0");
	else
		printf("%d %d", num, people_Max);
		
	return 0;
}
