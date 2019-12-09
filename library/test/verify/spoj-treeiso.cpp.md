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


# :warning: test/verify/spoj-treeiso.cpp
* category: test/verify


[Back to top page](../../../index.html)



## Code
{% raw %}
```cpp
int main() {
  int T;
  cin >> T;
  while(T--) {
    int N;
    cin >> N;
    UnWeightedGraph x(N), y(N);
    for(int i = 1; i < N; i++) {
      int a, b;
      cin >> a >> b;
      --a, --b;
      x[a].emplace_back(b);
      x[b].emplace_back(a);
    }
    for(int i = 1; i < N; i++) {
      int a, b;
      cin >> a >> b;
      --a, --b;
      y[a].emplace_back(b);
      y[b].emplace_back(a);
    }
    if(tree_isomorphism(x, y)) cout << "YES\n";
    else cout << "NO\n";
  }
}

```
{% endraw %}

[Back to top page](../../../index.html)
