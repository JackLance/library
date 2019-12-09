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


# :heavy_check_mark: test/verify/aoj-ntl-1-a.test.cpp


[Back to top page](../../../index.html)

* see: [http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_A](http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_A)


## Dependencies
* :heavy_check_mark: [math/number-theory/prime-factor.cpp](../../../library/math/number-theory/prime-factor.cpp.html)
* :heavy_check_mark: [template/template.cpp](../../../library/template/template.cpp.html)


## Code
{% raw %}
```cpp
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_A"

#include "../../template/template.cpp"

#include "../../math/number-theory/prime-factor.cpp"

int main() {
  int N;
  cin >> N;
  cout << N << ":";
  for(auto p : prime_factor(N)) {
    while(p.second--) cout << " " << p.first;
  }
  cout << endl;
}

```
{% endraw %}

[Back to top page](../../../index.html)
