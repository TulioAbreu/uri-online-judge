module Main(main) where

getInterval :: Float -> String
getInterval number
    | number >= 0 && number <= 25  = "Intervalo [0,25]\n"
    | number > 25 && number <= 50  = "Intervalo (25,50]\n"
    | number > 50 && number <= 75  = "Intervalo (50,75]\n"
    | number > 75 && number <= 100 = "Intervalo (75,100]\n"
    | otherwise = "Fora de intervalo\n"

main = do
    number <- readLn
    putStr $ getInterval number
