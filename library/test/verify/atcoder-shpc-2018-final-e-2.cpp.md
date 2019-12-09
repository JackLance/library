---
layout: default
---

<!-- mathjax config similar to math.stackexchange -->
<script type="text/javascript" async
  src="https://cdnjs.cloudflare.com/ajax/libs/mathjax/2.7.5/MathJax.js?config=TeX-MML-AM_CHTML">
</script>
<script type="text/x-mathjax-config">
  MathJax.Hub.Config({
    TeX: { equationNumbers: { autoNumber: "AMS" }},
    tex2jax: {
      inlineMath: [ ['$','$'] ],
      processEscapes: true
    },
    "HTML-CSS": { matchFontHeight: false },
    displayAlign: "left",
    displayIndent: "2em"
  });
</script>

<script type="text/javascript" src="https://cdnjs.cloudflare.com/ajax/libs/jquery/3.4.1/jquery.min.js"></script>
<script src="https://cdn.jsdelivr.net/npm/jquery-balloon-js@1.1.2/jquery.balloon.min.js" integrity="sha256-ZEYs9VrgAeNuPvs15E39OsyOJaIkXEEt10fzxJ20+2I=" crossorigin="anonymous"></script>
<script type="text/javascript" src="../../../assets/js/copy-button.js"></script>
<link rel="stylesheet" href="../../../assets/css/copy-button.css" />


# :warning: test/verify/atcoder-shpc-2018-final-e-2.cpp
* category: test/verify


[Back to top page](../../../index.html)



## Code
{% raw %}
```cpp
using pi = pair< int, int >;
using int64 = long long;
const int mod = 1e9 + 7;
int64 power[234567];
 
inline pi none(pi x, int y) { return x; }
 
inline int none(int x, int y) { return x; }
 
inline pi F(pi x, pi y) {
  return pi((1LL * y.first * power[x.second] + x.first % mod) % mod, x.second + y.second);
};
 
 
int main() {
  int N, M;
  string S[20];
 
  power[0] = 1;
  for(int i = 0; i < 234566; i++) power[i + 1] = 1LL * power[i] * 1000000 % mod;
 
  cin >> N >> M;
  for(int i = 0; i < M; i++) cin >> S[i];
  vector< vector< pair< int, int > > > dat(M, vector< pair< int, int > >(N));
  for(int i = 0; i < M; i++) {
    for(int j = 0; j < N; j++) {
      dat[i][j].first = S[i][j] - 'a';
      dat[i][j].first++;
      dat[i][j].second = 1;
    }
  }
  using T = RedBlackTree< pi, int, F, none, none, none >;
  T beet(M * N * 2, pi(0, 0), 0);
  vector< T::Node * > root;
  for(int i = 0; i < M; i++) root.push_back(beet.build(dat[i]));
 
  int Q;
  cin >> Q;
  while(Q--) {
    int T, A, B, C, D;
    cin >> T >> A >> B >> C >> D;
    --A, --B, --C;
    if(T == 1) {
      auto S = beet.split(root[A], D);
      auto T = beet.split(S.first, C);
      auto U = beet.split(root[B], D);
      auto V = beet.split(U.first, C);
      root[A] = beet.merge(T.first, beet.merge(V.second, S.second));
      root[B] = beet.merge(V.first, beet.merge(T.second, U.second));
    } else {
      auto S = beet.split(root[A], D);
      auto T = beet.split(S.first, C);
      printf("%d\n", beet.sum(T.second).first);
      root[A] = beet.merge(beet.merge(T.first, T.second), S.second);
    }
  }
}

```
{% endraw %}

[Back to top page](../../../index.html)
