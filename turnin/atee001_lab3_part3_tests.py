tests = [ {'description': 'PINA: 0x00, PORTC: 0x40',
    'steps': [ {'inputs': [('PINA',0x00)] , 'iterations': 1 } ],
    'expected': [('PORTC',0x40)],
    },
     {'description': 'PINA: 0x0F => PORTC: 0x3F',
        'steps': [ {'inputs': [('PINA',0x0F)] , 'iterations': 1 }],
        'expected': [('PORTC',0x3F)],
        },
     {'description': 'PINA: 0x0D => PORTC: 0x3F',
        'steps': [ {'inputs': [('PINA',0x0D)] , 'iterations': 1 }],
        'expected': [('PORTC',0x3F)],
        },
 {'description': 'PINA: 0x0B => PORTC: 0x3E',
        'steps': [ {'inputs': [('PINA',0x0B)] , 'iterations': 1 }],
        'expected': [('PORTC',0x3E)],
        },
{'description': 'PINA: 0x09 => PORTC: 0x3C',
        'steps': [ {'inputs': [('PINA',0x09)] , 'iterations': 1 }],
        'expected': [('PORTC',0x3C)],
        },
{'description': 'PINA: 0x06 => PORTC: 0x38',
        'steps': [ {'inputs': [('PINA',0x06)] , 'iterations': 1 }],
        'expected': [('PORTC',0x38)],
        },
{'description': 'PINA: 0x03 => PORTC: 0x70',
        'steps': [ {'inputs': [('PINA',0x03)] , 'iterations': 1 }],
        'expected': [('PORTC',0x70)],
        },
{'description': 'PINA: 0x01 => PORTC: 0x60',
        'steps': [ {'inputs': [('PINA',0x01)] , 'iterations': 1 }],
        'expected': [('PORTC',0x60)],
        },
{'description': 'PINA: 0x31 => PORTC: 0xE0',
        'steps': [ {'inputs': [('PINA',0x31)] , 'iterations': 1 }],
        'expected': [('PORTC',0xE0)],
        },
{'description': 'PINA: 0x3F => PORTC: 0xBF',
        'steps': [ {'inputs': [('PINA',0x3F)] , 'iterations': 1 }],
        'expected': [('PORTC',0xBF)],
        },
    ]

