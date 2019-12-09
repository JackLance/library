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


# :warning: graph/others/topological-sort.cpp
* category: graph/others


[Back to top page](../../../index.html)



## Verified
* :heavy_check_mark: [test/verify/aoj-0275.test.cpp](../../../verify/test/verify/aoj-0275.test.cpp.html)


## Code
{% raw %}
```cpp
template< typename G >
vector< int > topological_sort(const G &g) {
  const int N = (int) g.size();
  vector< int > deg(N);
  for(int i = 0; i < N; i++) {
    for(auto &to : g[i]) ++deg[to];
  }
  stack< int > st;
  for(int i = 0; i < N; i++) {
    if(deg[i] == 0) st.emplace(i);
  }
  vector< int > ord;
  while(!st.empty()) {
    auto p = st.top();
    st.pop();
    ord.emplace_back(p);
    for(auto &to : g[p]) {
      if(--deg[to] == 0) st.emplace(to);
    }
  }
  return ord;
}

```
{% endraw %}

[Back to top page](../../../index.html)
