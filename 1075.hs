module Main (main) where

main = do
     n <- readLn
     mapM_ print $ filter (\x -> x `mod` n == 2) [1 .. 10000]
