







































/*
           WHOLE INPUT FILE PROCESS

      Disk Storage
      +-----------+
      | data.txt  |
      +-----+-----+
            |
            | fopen("file.txt","r")
            v
      +-----------+
      | FILE *fp  |  ← file handle/ file pointer
      +-----+-----+
            |
            | fread / fgets / fscanf
            v
      +-----------+
      |   RAM     |
      | buffer[]  |
      +-----+-----+
            |
            | program logic
            v
      +-----------+
      |  Output   |
      | printf()  |
      +-----------+
*/