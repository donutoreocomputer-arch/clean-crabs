U0 PickDumbutil()
{
  I64 choice = RandU64 % 3;
  "Divine intellect has chosen: ";
  switch (choice)
  {
    case 0: "print\n"; break;
    case 1: "new\n"; break;
    case 2: "pwned\n"; break;
  }
}

PickDumbutil;
