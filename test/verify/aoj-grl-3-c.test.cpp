#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_3_C"

#include "../../template/template.cpp"

#include "../../graph/graph-template.cpp"

#include "../../graph/connected-components/strongly-connected-components.cpp"

int main() {
  int V, E, Q;
  cin >> V >> E;
  StronglyConnectedComponents<> scc(V);
  scc.read(E, false, 0, true);
  scc.build();
  cin >> Q;
  while(Q--) {
    int a, b;
    cin >> a >> b;
    cout << (int) (scc[a] == scc[b]) << "\n";
  }
}
