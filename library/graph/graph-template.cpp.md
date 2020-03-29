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
<script type="text/javascript" src="../../assets/js/copy-button.js"></script>
<link rel="stylesheet" href="../../assets/css/copy-button.css" />


# :heavy_check_mark: graph/graph-template.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#f8b0b924ebd7046dbfa85a856e4682c8">graph</a>
* <a href="{{ site.github.repository_url }}/blob/master/graph/graph-template.cpp">View this file on GitHub</a>
    - Last commit date: 2020-03-28 20:39:54+09:00




## Verified with

* :heavy_check_mark: <a href="../../verify/test/verify/aoj-0275.test.cpp.html">test/verify/aoj-0275.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-0294.test.cpp.html">test/verify/aoj-0294.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-0304.test.cpp.html">test/verify/aoj-0304.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-2450.test.cpp.html">test/verify/aoj-2450.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-2667.test.cpp.html">test/verify/aoj-2667.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-2821.test.cpp.html">test/verify/aoj-2821.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-3022.test.cpp.html">test/verify/aoj-3022.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-alds-1-11-c.test.cpp.html">test/verify/aoj-alds-1-11-c.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-grl-1-a-2.test.cpp.html">test/verify/aoj-grl-1-a-2.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-grl-1-a-3.test.cpp.html">test/verify/aoj-grl-1-a-3.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-grl-1-a.test.cpp.html">test/verify/aoj-grl-1-a.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-grl-1-b-2.test.cpp.html">test/verify/aoj-grl-1-b-2.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-grl-1-b.test.cpp.html">test/verify/aoj-grl-1-b.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-grl-2-a-2.test.cpp.html">test/verify/aoj-grl-2-a-2.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-grl-2-a-3.test.cpp.html">test/verify/aoj-grl-2-a-3.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-grl-2-a-4.test.cpp.html">test/verify/aoj-grl-2-a-4.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-grl-2-a.test.cpp.html">test/verify/aoj-grl-2-a.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-grl-3-a.test.cpp.html">test/verify/aoj-grl-3-a.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-grl-3-b.test.cpp.html">test/verify/aoj-grl-3-b.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-grl-3-c.test.cpp.html">test/verify/aoj-grl-3-c.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-grl-5-a.test.cpp.html">test/verify/aoj-grl-5-a.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-grl-5-c-2.test.cpp.html">test/verify/aoj-grl-5-c-2.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/aoj-grl-5-c.test.cpp.html">test/verify/aoj-grl-5-c.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/yosupo-dominatortree.test.cpp.html">test/verify/yosupo-dominatortree.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/yosupo-scc.test.cpp.html">test/verify/yosupo-scc.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/yosupo-two-edge-connected-components.test.cpp.html">test/verify/yosupo-two-edge-connected-components.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/verify/yukicoder-1002.test.cpp.html">test/verify/yukicoder-1002.test.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
template< typename T = int >
struct Edge {
  int from, to;
  T cost;
  int idx;

  Edge() = default;

  Edge(int from, int to, T cost = 1, int idx = -1) : from(from), to(to), cost(cost), idx(idx) {}

  operator int() const { return to; }
};

template< typename T = int >
struct Graph {
  vector< vector< Edge< T > > > g;
  int es;

  Graph() = default;

  explicit Graph(int n) : g(n), es(0) {}

  size_t size() const {
    return g.size();
  }

  void add_directed_edge(int from, int to, T cost = 1) {
    g[from].emplace_back(from, to, cost, es++);
  }

  void add_edge(int from, int to, T cost = 1) {
    g[from].emplace_back(from, to, cost, es);
    g[to].emplace_back(to, from, cost, es++);
  }

  void read(int M, int padding = -1, bool weighted = false, bool directed = false) {
    for(int i = 0; i < M; i++) {
      int a, b;
      cin >> a >> b;
      a += padding;
      b += padding;
      T c = T(1);
      if(weighted) cin >> c;
      if(directed) add_directed_edge(a, b, c);
      else add_edge(a, b, c);
    }
  }
};

template< typename T = int >
using Edges = vector< Edge< T > >;

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "graph/graph-template.cpp"
template< typename T = int >
struct Edge {
  int from, to;
  T cost;
  int idx;

  Edge() = default;

  Edge(int from, int to, T cost = 1, int idx = -1) : from(from), to(to), cost(cost), idx(idx) {}

  operator int() const { return to; }
};

template< typename T = int >
struct Graph {
  vector< vector< Edge< T > > > g;
  int es;

  Graph() = default;

  explicit Graph(int n) : g(n), es(0) {}

  size_t size() const {
    return g.size();
  }

  void add_directed_edge(int from, int to, T cost = 1) {
    g[from].emplace_back(from, to, cost, es++);
  }

  void add_edge(int from, int to, T cost = 1) {
    g[from].emplace_back(from, to, cost, es);
    g[to].emplace_back(to, from, cost, es++);
  }

  void read(int M, int padding = -1, bool weighted = false, bool directed = false) {
    for(int i = 0; i < M; i++) {
      int a, b;
      cin >> a >> b;
      a += padding;
      b += padding;
      T c = T(1);
      if(weighted) cin >> c;
      if(directed) add_directed_edge(a, b, c);
      else add_edge(a, b, c);
    }
  }
};

template< typename T = int >
using Edges = vector< Edge< T > >;

```
{% endraw %}

<a href="../../index.html">Back to top page</a>
