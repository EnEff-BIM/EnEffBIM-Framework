// code generated with MoCGF

model ${project.projectName} "${project.modelDescription}"

% for modelCounter in range(len(models)):
<%include file="${models[modelCounter].modelPath}.mot" args="modelCounter=modelCounter"/>
% endfor 

equation

% for key in list(connections.connections.keys()):

connect(${key},${connections.connections[key]})

% endfor 

end ${project.projectName};
