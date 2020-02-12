module Main (main) where

main = do
     n <- readLn
     mapM_ (\x -> putStrLn $ show x ++ " x " ++ show n  ++ " = " ++ show(x * n) ) [1 .. 10]
