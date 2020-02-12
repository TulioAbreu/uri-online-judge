module Main (main) where

import Text.Printf

lerLista :: [Float] -> IO [Float]
lerLista xs = do
     x <- readLn
     if x < 0
     then return (reverse xs)
     else lerLista (x:xs)

main :: IO()
main = do 
     list <- lerLista []
     let result = (/) (sum list) (fromIntegral (length list))
     printf "%.2f\n" result
