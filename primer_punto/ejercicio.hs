module Main where

ordenar :: Ord a => [a] -> [a]
ordenar []     = []
ordenar (x:xs) = insertar x (ordenar xs)

insertar :: Ord a => a -> [a] -> [a]
insertar y [] = [y]
insertar y (z:zs)
  | y <= z    = y : z : zs
  | otherwise = z : insertar y zs

main :: IO ()
main = do
  let calificaciones = [4.5, 3.2, 5.0, 2.8, 4.0]
  print (ordenar calificaciones)
