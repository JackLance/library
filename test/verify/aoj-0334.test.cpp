#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0304"

#include "../../template/template.cpp"

#include "../../graph/flow/bipartite-flow.cpp"

int main() {
  int N;
  cin >> N;
  --N;
  BipartiteFlow flow(N, N);
  for(int i = 0; i < N; i++) {
    for(int j = 0; j < N; j++) {
      int x;
      cin >> x;
      if(x) flow.add_edge(j, i);
    }
  }
  auto v = flow.lex_min_max_matching();
  if(v.size() < N) {
    cout << "no\n";
  } else {
    cout << "yes\n";
    for(auto &p : v) cout << p.second + 1 << "\n";
  }
}

