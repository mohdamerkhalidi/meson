project('hidden symbol', 'c')

l = shared_library('bob', 'bob.c',
  symbol_visibility: 'hidden')

executable('bobuser', 'bobuser.c',
  link_with: l)
