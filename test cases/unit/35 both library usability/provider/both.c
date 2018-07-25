int get_dat_value (void);

#ifdef INSTALLED_LIBRARY
  #define EXPECTED_VALUE 69
#else
  #define EXPECTED_VALUE 42
#endif

int both_get_dat_value (void)
{
  if (get_dat_value () != EXPECTED_VALUE)
    return 666;
  return 111;
}
