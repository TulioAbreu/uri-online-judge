module Main (main) where

import System.IO (stdout, hFlush)

printList :: [Integer] -> IO()
printList [] = return()
printList (x:xs) = do
     putStrLn . show $ x
     printList xs
     return()

main :: IO()
main = do 
     let list = [2, 4 .. 100]
     printList list
     return ()
