import networkx as nx
import matplotlib.pyplot as plt

# Create a weighted undirected graph
G = nx.Graph()

# Add edges (same as in my C++ code)
edges = [
    (0, 1, 2),
    (0, 2, 4),
    (1, 2, 1),
    (1, 3, 7),
    (2, 4, 3),
    (3, 5, 1),
    (4, 3, 2),
    (4, 2, 3)
]

# Add edges to the graph with weights
G.add_weighted_edges_from(edges)

# Define source and target
src, target = 1, 5

# Compute shortest path using Dijkstra
path = nx.dijkstra_path(G, source=src, target=target, weight='weight')
path_edges = list(zip(path, path[1:]))

# Draw the graph
pos = nx.spring_layout(G, seed=42)  # layout for consistent positioning

plt.figure(figsize=(8,6))
nx.draw_networkx_nodes(G, pos, node_size=600, node_color="lightblue")
nx.draw_networkx_labels(G, pos, font_size=10, font_weight="bold")

# Draw all edges in gray
nx.draw_networkx_edges(G, pos, edgelist=G.edges(), edge_color="gray")

# Highlight shortest path edges in red
nx.draw_networkx_edges(G, pos, edgelist=path_edges, edge_color="red", width=2)

# Draw edge weights
labels = nx.get_edge_attributes(G, 'weight')
nx.draw_networkx_edge_labels(G, pos, edge_labels=labels, font_size=9)

# Title
plt.title(f"Shortest path from {src} to {target}: {path} (Cost: {nx.dijkstra_path_length(G, src, target)})", fontsize=12)
plt.axis("off")
plt.show()