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


# :heavy_check_mark: graph/mst/prim.cpp

<a href="../../../index.html">Back to top page</a>

* category: <a href="../../../index.html#51f95ed2fd9ed3be34f576d38fbd25a2">graph/mst</a>
* <a href="{{ site.github.repository_url }}/blob/master/graph/mst/prim.cpp">View this file on GitHub</a>
    - Last commit date: 2020-01-24 18:37:57+09:00




## Verified with

* :heavy_check_mark: <a href="../../../verify/test/verify/aoj-grl-2-a.test.cpp.html">test/verify/aoj-grl-2-a.test.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
template< typename T >
struct MinimumSpanningTree {
  T cost;
  Edges< T > edges;
};

template< typename T >
MinimumSpanningTree< T > prim(WeightedGraph< T > g) {
  T total = T();
  vector< int > used(g.size());
  vector< edge< T > * > dist(g.size());
  using pi = pair< T, int >;
  priority_queue< pi, vector< pi >, greater<> > que;
  que.emplace(T(), 0);
  Edges< T > edges;
  while(!que.empty()) {
    auto p = que.top();
    que.pop();
    if(used[p.second]) continue;
    used[p.second] = true;
    total += p.first;
    if(dist[p.second]) edges.emplace_back(*dist[p.second]);
    for(auto &e : g[p.second]) {
      if(used[e.to] || (dist[e.to] && dist[e.to]->cost <= e.cost)) continue;
      e.src = p.second;
      que.emplace(e.cost, e.to);
    }
  }
  return {total, edges};
}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "graph/mst/prim.cpp"
template< typename T >
struct MinimumSpanningTree {
  T cost;
  Edges< T > edges;
};

template< typename T >
MinimumSpanningTree< T > prim(WeightedGraph< T > g) {
  T total = T();
  vector< int > used(g.size());
  vector< edge< T > * > dist(g.size());
  using pi = pair< T, int >;
  priority_queue< pi, vector< pi >, greater<> > que;
  que.emplace(T(), 0);
  Edges< T > edges;
  while(!que.empty()) {
    auto p = que.top();
    que.pop();
    if(used[p.second]) continue;
    used[p.second] = true;
    total += p.first;
    if(dist[p.second]) edges.emplace_back(*dist[p.second]);
    for(auto &e : g[p.second]) {
      if(used[e.to] || (dist[e.to] && dist[e.to]->cost <= e.cost)) continue;
      e.src = p.second;
      que.emplace(e.cost, e.to);
    }
  }
  return {total, edges};
}

```
{% endraw %}

<a href="../../../index.html">Back to top page</a>
