import heapq

def astar(graph, start, goal):
    """
    Implements the A* algorithm to find the shortest path between two nodes in a graph.

    Args:
        graph: A dictionary representing the graph, where keys are nodes and values are lists of tuples containing neighboring nodes and their associated costs.
        start: The starting node.
        goal: The goal node.

    Returns:
        A list of nodes representing the shortest path from the start to the goal, or None if no path exists.
    """

    open_set = [(0, start, [])]  # Priority queue containing (f_score, node, path)
    closed_set = set()  # Set of explored nodes
    came_from = {}  # Dictionary to store parent nodes for path reconstruction

    def heuristic(node):
        # You can replace this with a more accurate heuristic, such as Euclidean or Manhattan distance
        return 0  # Assuming no heuristic for now

    while open_set:
        f_score, current, path = heapq.heappop(open_set)
        closed_set.add(current)

        if current == goal:
            return path + [goal]

        for neighbor, cost in graph[current]:
            if neighbor in closed_set:
                continue

            tentative_g_score = f_score + cost
            if neighbor not in open_set or tentative_g_score < open_set[open_set.index(neighbor)][0]:
                came_from[neighbor] = current
                tentative_f_score = tentative_g_score + heuristic(neighbor)
                heapq.heappush(open_set, (tentative_f_score, neighbor, path + [neighbor]))

    return None  # No path found

# Example usage:
graph = {
    'A': [('B', 1), ('C', 3)],
    'B': [('D', 2)],
    'C': [('D', 1)],
    'D': []
}

start_node = 'A'
goal_node = 'D'

path = astar(graph, start_node, goal_node)
if path:
    print("Shortest path:", path)
else:
    print("No path found.")
