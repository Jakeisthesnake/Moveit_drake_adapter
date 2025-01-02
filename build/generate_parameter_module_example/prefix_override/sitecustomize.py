import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/jake/moveit2_ws_main/install/generate_parameter_module_example'
