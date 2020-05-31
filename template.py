TEMPLATE = """

<!DOCTYPE html>
<html lang="en">

<head>
  <meta charset="UTF-8">
  <meta name="viewport"
        content="width=device-width, initial-scale=1.0">
  <title>Document</title>
  <style>
    html,
    body {
      width: 100%;
      height: 100%;
      margin: 0;
      padding-left: 100px;
      padding-top: 20px;
      padding-bottom: 20px;
    }
    #tree {
      height: 100%;
    }

  </style>
</head>

<body>
  <div class="circle"></div>
  <div id="tree"></div>
  <script src="https://d3js.org/d3.v5.js"></script>
  <script>
  var selection = d3.selection
var zoom = d3.zoom()
width = window.innerWidth
height = window.innerHeight
margin = { top: 10, right: 120, bottom: 10, left: 40 }
dy = width / 3
dx = 10

data = {{json_data}};
data = data["data"];
columns=[
]
nodeSize=30

format = d3.format(",")
let i = 0; 
root= d3.hierarchy(data).eachBefore(d => d.index = i++);
const nodes = root.descendants();

  const svg = d3.create("svg")
      .attr("viewBox", [-nodeSize / 2, -nodeSize * 3 / 2, width, (nodes.length + 1) * nodeSize])
      .attr("font-family", "sans-serif")
      .attr("font-size", 15)
      .style("overflow", "visible");

  const link = svg.append("g")
      .attr("fill", "none")
      .attr("stroke", "#999")
    .selectAll("path")
    .data(root.links())
    .join("path")
      .attr("d", d => `
        M${d.source.depth * nodeSize},${d.source.index * nodeSize}
        V${d.target.index * nodeSize}
        h${nodeSize}
      `);

  const node = svg.append("g")
    .selectAll("g")
    .data(nodes)
    .join("g")
      .attr("transform", d => `translate(0,${d.index * nodeSize})`);

  node.append("circle")
      .attr("cx", d => d.depth * nodeSize)
      .attr("r", 2.5)
      .attr("fill", d => d.children ? null : "#999");

  node.append("text")
      .attr("dy", "0.32em")
      .attr("x", d => d.depth * nodeSize + 6)
      .text(d => d.data.name);

  node.append("title")
      .text(d => d.ancestors().reverse().map(d => d.data.name).join("/"));

  for (const {label, value, format, x} of columns) {
    svg.append("text")
        .attr("dy", "0.32em")
        .attr("y", -nodeSize)
        .attr("x", x)
        .attr("text-anchor", "end")
        .attr("font-weight", "bold")
        .text(label);

    node.append("text")
        .attr("dy", "0.32em")
        .attr("x", x)
        .attr("text-anchor", "end")
        .attr("fill", d => d.children ? null : "#555")
      .data(root.copy().sum(value).descendants())
        .text(d => format(d.value, d));
  }

// d3.select('#tree').append(svg.node())
document.querySelector('#tree').append(svg.node())
  </script>
</body>

</html>


"""