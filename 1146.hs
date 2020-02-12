module Main (main) where

printSequence :: Int -> IO()
printSequence number = do
     putStr $ show 1
     mapM_ (\x -> putStr $ " " ++ show x) [2 .. number]
     putStr "\n"
     program

program = do
     number <- readLn
     if number /= 0
     then printSequence number
     else return ()

main = do
     program
     return ()