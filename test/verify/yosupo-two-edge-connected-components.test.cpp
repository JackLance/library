#define PROBLEM "https://judge.yosupo.jp/problem/two_edge_connected_components"

#include "../../template/template.cpp"

#include "../../graph/graph-template.cpp"

#include "../../graph/others/low-link.cpp"
#include "../../graph/connected-components/two-edge-connected-components.cpp"

int main() {
  int N, M;
  cin >> N >> M;
  TwoEdgeConnectedComponents<> g(N);
  g.read(M, 0);
  g.build();
  cout << g.group.size() << "\n";
  for(auto &p : g.group) {
    cout << p.size() << " " << p << "\n";
  }
}
