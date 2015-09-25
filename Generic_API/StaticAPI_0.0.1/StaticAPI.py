from MappedHierarchy import FilledMapped as stat_api

def static_api():
    return stat_api.return_mapped_project()

test = static_api()

print(test.buildings[0].thermal_zones[0].supply_components[0].connectors)
