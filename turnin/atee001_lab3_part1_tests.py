tests = [ {'description': 'PINA: 0x00, PINB: 0x00 => PORTC: 0x00',
    'steps': [ {'inputs': [('PINA',0x00), ('PINB', 0x00)] , 'iterations': 1 } ],
    'expected': [('PORTC',0x00)],
    },
     {'description': 'PINA: 0xFF, PINB: 0xFF => PORTC: 0x10',
        'steps': [ {'inputs': [('PINA',0xFF), ('PINB', 0xFF)] , 'iterations': 1 }],
        'expected': [('PORTC',0x10)],
        },
     {'description': 'PINA: 0x04, PINB: 0x08 => PORTC: 0x02',
        'steps': [ {'inputs': [('PINA',0x04), ('PINB', 0x08)] , 'iterations': 1 }],
        'expected': [('PORTC',0x02)],
        },
 {'description': 'PINA: 0xCE, PINB: 0x66 => PORTC: 0x09',
        'steps': [ {'inputs': [('PINA',0xCE), ('PINB', 0x66)] , 'iterations': 1 }],
        'expected': [('PORTC',0x09)],
        },
    ]
