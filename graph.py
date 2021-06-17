from collections import defaultdict

def getDistance(graph, curNode, visited):
    visited[curNode] = True
    queue = []
    queue.append(curNode)
    counter = 0
    maxDist = 0
    while len(queue) != 0:
        newNode = queue.pop(0)
        for nbr in graph[newNode]:
            if visited[nbr] is False:
                counter += 1
                visited[nbr] = True
                queue.append(nbr)


def func(graph):
    visited = defaultdict(bool)
    maxDist = []
    for i in graph.keys():
        dist = getDistance(graph, i, visited)
        maxDist.append(dist)
    
    return min(maxDist)

graph = defaultdict(list)

v, e = map(int, input().split())
for i in range(e):
    x, y = map(int, input().split())
    graph[x].append(y)
    graph[y].append(x)

minDist = func(graph, start)