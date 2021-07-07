test_case = int(input());
while test_case > 0:
  people = int(input());
  if people>2:
    people=people-2;
  else:
    people=0;
  print(people);
  test_case -= 1