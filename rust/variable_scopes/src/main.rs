fn main() {
    let s1 = "In main function";
    println!("{}", s1);

    {
        let s2 = "In code block";
        println!("{}", s2);
    }

    string_function();
}

fn string_function() {
    let s3 = "In called function";
    println!("{}", s3);
}