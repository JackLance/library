## 概要

個数制限つきナップサック問題を次に示す.

重さ $w_i$, 価値 $v_i$ であるような $N$ 種類の品物がある. $i$ 番目の品物は $m_i$ 個まで選ぶことができる. 重さの和が $W$ 以下となるように選ぶとき, 価値の最大値を求めよ.

まず「dp[価値の和]:= 重さの和の最小値」をある程度の大きさ($N \max(v_i)^2$)まで求める。残りの分は, 効率が良い順(価値/重さが大きい順)に貪欲にとってもいいことが示せて, なんかできる(c).

* `knapsack_limitations(w, m, v, W)`: 価値の最大値を求める. 

## 計算量

* $O(N^2 \max(v_i)^2)$