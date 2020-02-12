module Main (main) where

main = do
     v <- readLn
     mapM_ print (filter (\x -> v `mod` x == 0) [1 .. v])