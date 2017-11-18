/*** 挿入用ソース ***/

#define MAX_NODE_NUM 10

/** ダイクストラ法：グラフ構造で２点間の最短経路を求めるアルゴリズム **/
//返り値：２点間の最小コスト
/* 前提 */
//1.繋がっていない点のコスト（cost[from][to]）は無限大（と考えていい数値）がセットされている
//2.コストがマイナスの経路は無い
int dijkstra(int start,int goal,int cost[MAX_NODE_NUM][MAX_NODE_NUM],int node_num){

  //探索済みか（最短経路が確定したか）
  bool searched[node_num];
  
  //ゴールまでのコスト
  int goal_cost;

  //優先度付きキューを使用する
  //(コスト、現在位置）のpairを要素とする
  //コストが小さい順のキューとなるよう宣言
  priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;

  if(start == goal)
    return 0;

  for (int i = 0; i < node_num; i++) {
    searched[i] = false;
  }

  
  //開始点をキューに入れる。コスト０
  q.push(make_pair(0,start));
  while(true){
    //コスト最小（キュー先頭）を取り出す
    pair<int,int> p = q.top();
    q.pop();

    //取り出したノードが探索済み（最短経路確定済み）なら無視する
    if(searched[p.second]){
      continue;
    }

    //現在ノードを探索済み（最短経路確定済み）とする
    searched[p.second] = true;
    
    if(p.second == goal){
      //ゴールに到達した場合、ループを終了する
      goal_cost = p.first;
      break;
    } else {
      //ゴールに到達しなかった場合、最短経路が確定していない隣接するノードをキューへ追加する
      for (int k = 0; k < node_num; k++) {
	if(!searched[k]){
	  q.push(make_pair(p.first+cost[p.second][k],k));
	}
      }
    }
  }

  return goal_cost;
}
