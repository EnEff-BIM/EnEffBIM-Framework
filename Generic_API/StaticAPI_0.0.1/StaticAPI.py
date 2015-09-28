from MappedHierarchy import FilledMapped as stat_api


class StaticAPI(object):
    
    def __init__(self):
        
        self.mapped_data = stat_api.return_mapped_project()
        self.unmapped_data = None


