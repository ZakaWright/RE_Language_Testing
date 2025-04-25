fn main() {
    println!("For loop (arr)");
    // for loop with array
    let arr = [0, 1, 2, 3];
    for x in arr {
        println!("\t{x}");
    }
    
    println!("\nFor loop (vec)");
    // for loop with vector
    let vec = vec![4, 5, 6, 7];
    for y in vec {
        println!("\t{}", y);
    }

    println!("\nFor loop (iterator)");
    // for loop iterator
    for z in 0..4 {
        println!("\t{z}");
    }

    println!("\nWhile loop:");
    // while loop
    let mut i = 0;
    while i < 4 {
        println!("\t{i}");
        i += 1;
    }

    println!("\n\"Infinite\" loop:");
    // infinite loop
    let mut j = 0;
    loop {
        if j == 4 {
            break;
        }
        println!("\t{}", j);
        j += 1;

    }
}
