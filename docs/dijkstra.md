## 概要

負辺のないグラフで単一始点全点間最短路を求めるアルゴリズム. 各地点でもっとも近い頂点から距離が確定していく. 距離順でソートされたヒープを用いると, 効率よく距離を確定していくことができる.

* `dijkstra(g, s)`: 重み付きグラフ `g` で, 頂点 `s` から全点間の最短コストを求める. 到達できない頂点には, 型の最大値が格納される.

## 計算量

* $O(E \log V)$ 
