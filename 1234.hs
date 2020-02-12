module Main (main) where

import System.IO (isEOF)
import Data.Char

transformString :: String -> Int -> String
transformString [] _ = ""
transformString (' ':xs) 2 = [toUpper ' '] ++ transformString xs 2
transformString (' ':xs) 1 = [toLower ' '] ++ transformString xs 1
transformString (x:xs) 2 = [toLower x] ++ transformString xs 1
transformString (x:xs) 1 = [toUpper x] ++ transformString xs 2

loop :: IO()
loop = do 
     done <- isEOF
     if done
          then return()
          else do 
               string <- getLine
               putStrLn $ transformString string 1
               loop 

main :: IO()
main = loop