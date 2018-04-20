import os
dir_path = os.path.dirname(os.path.realpath(__file__))

def FlagsForFile(filename, **kwargs):
    return {
            'flags': ['-x', 'c++',
                      '-lncurses',
                      '-Wall',
                      '-Wextra',
                      '-Werror',
                      '-isystem', '/usr/include',
                      '-I', '{}/include'.format(dir_path),
                      '-I','{}/src'.format(dir_path),
                      '-I', '{}'.format(dir_path)]
    }
