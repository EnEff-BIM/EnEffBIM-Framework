// code generated with MoCGF

model ${project.projectName} "${project.modelDescription}"
	import ${project.libraryName}

% for key in range(len(project.model)):
	${project.model[key].modelName}
% endfor 

end ${project.projectName};
