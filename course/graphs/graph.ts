class Graph {
  private totalNodes: number = 0;
  private adjacentList: number[][]
  constructor() {
    this.totalNodes = 0;
    this.adjacentList = [];
  }

  public addVertex(node: number) {
     this.adjacentList[node] = []
  }

  public addEdge(node1: number , node2: number) {
    this.adjacentList[node1].push(node2);
    this.adjacentList[node2].push(node1);
  }
}


