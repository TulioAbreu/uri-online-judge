module Main (main) where

     mesExtenso mes
          | mes == 1 = "January"
          | mes == 2 = "February"
          | mes == 3 = "March"
          | mes == 4 = "April"
          | mes == 5 = "May"
          | mes == 6 = "June"
          | mes == 7 = "July"
          | mes == 8 = "August"
          | mes == 9 = "September"
          | mes == 10 = "October"
          | mes == 11 = "November"
          | mes == 12 = "December"

     main = do mes <- readLn
               putStrLn . mesExtenso $ mes