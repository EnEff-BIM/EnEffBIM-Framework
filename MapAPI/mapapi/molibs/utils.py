
def object_in_list(hierarchy_node, list_of_hierarchy_nodes):
    '''

    Parameters
    ----------
    hierarchy_node
    list_of_hierarchy_nodes

    Returns
    -------

    '''
    for node in list_of_hierarchy_nodes:
        print(node.RefId(), hierarchy_node.getSimModelObject().RefId())
        if node.RefId() == hierarchy_node.getSimModelObject().RefId():
            return True
    return False