module Main (main) where

factorial :: Integer -> Integer
factorial 1 = 1
factorial n = n * factorial (n - 1)

main = do
     x <- readLn
     print $ factorial x