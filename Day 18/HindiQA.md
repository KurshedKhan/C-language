## ✅ **Basics of C Language**

1. **What is C language?**

   * C भाषा एक सामान्य उद्देश्य, प्रोसीजरल प्रोग्रामिंग भाषा है जिसे Dennis Ritchie ने 1972 में AT\&T Bell Labs में विकसित किया था। यह सिस्टम सॉफ़्टवेयर, ऐप्लिकेशन सॉफ़्टवेयर और एम्बेडेड सिस्टम में उपयोग के लिए एक लोकप्रिय और शक्तिशाली भाषा है।

2. **What are the key features of C?**

   * **Fast and Efficient**: C एक बहुत तेज़ और कुशल भाषा है क्योंकि इसे सिस्टम स्तर पर काम करने के लिए डिज़ाइन किया गया है।
   * **Low-Level Access**: C को हल्के स्तर (low-level) पर हार्डवेयर के साथ इंटरैक्ट करने की क्षमता है।
   * **Portable**: C को विभिन्न कंप्यूटर सिस्टम्स पर आसानी से पोर्ट किया जा सकता है।
   * **Extensible**: C को नई सुविधाओं और मॉड्यूल्स को जोड़ने के लिए एक्सटेंड किया जा सकता है।

3. **What is the difference between compiler and interpreter?**

   * **Compiler**: एक Compiler पूरी सोर्स कोड को एक साथ मशीन कोड (object code) में ट्रांसलेट करता है। इसमें पूरा प्रोग्राम पहले कंपाइल होता है, फिर रन होता है।
   * **Interpreter**: एक Interpreter लाइन-बाय-लाइन सोर्स कोड को ट्रांसलेट करता है और तुरंत परिणाम दिखाता है। इसका मतलब है कि एक समय में केवल एक लाइन को ही एक्सीक्यूट किया जाता है।

4. **What is the use of `main()` function?**

   * `main()` function एक विशेष फ़ंक्शन है जिसे C प्रोग्राम में एंट्री पॉइंट के रूप में माना जाता है। प्रोग्राम के निष्पादन की शुरुआत `main()` से होती है।

5. **What are keywords in C?**

   * C में **keywords** ऐसे शब्द होते हैं जो विशेष रूप से प्रोग्रामिंग भाषा के द्वारा निर्धारित होते हैं और इनका उपयोग किसी विशिष्ट कार्य के लिए किया जाता है। उदाहरण: `int`, `return`, `if`, `while`, `switch` आदि।

6. **What are identifiers?**

   * **Identifiers** वे नाम होते हैं जिन्हें हम वेरिएबल्स, फंक्शन्स, एरेज़ आदि के लिए निर्धारित करते हैं। उदाहरण: `int sum`, `float average`, आदि।

7. **What is the size of `int` in C?**

   * `int` का आकार सामान्यत: 4 बाइट्स होता है, लेकिन यह सिस्टम पर निर्भर करता है। उदाहरण के लिए, 16-बिट सिस्टम पर यह 2 बाइट्स हो सकता है।

8. **What is a variable in C?**

   * **Variable** किसी नाम से जुड़ी एक मेमोरी लोकेशन होती है जो डेटा को स्टोर करने के लिए प्रयोग में आती है। उदाहरण: `int a = 10;`

9. **What is a constant in C?**

   * **Constant** वह मान है जो प्रोग्राम के निष्पादन के दौरान बदलता नहीं है। उदाहरण: `const int MAX = 100;`

10. **What is a data type?**

    * **Data type** यह निर्दिष्ट करता है कि किसी वेरिएबल में किस प्रकार का डेटा संग्रहित किया जाएगा। उदाहरण: `int`, `float`, `char`, आदि।

---

## ✅ **Control Structures**

11. **What is `if` statement?**

    * `if` statement एक कंडीशनल स्टेटमेंट है, जिसका उपयोग किसी शर्त के सत्य होने पर कुछ कोड को निष्पादित करने के लिए किया जाता है। यदि शर्त सत्य है, तो कोड ब्लॉक को निष्पादित किया जाता है।

    ```c
    if (a > b) {
        printf("a is greater than b");
    }
    ```

12. **What is a `switch` statement?**

    * `switch` एक मल्टी-वे कंडीशनल स्टेटमेंट है, जो एक वैरिएबल के आधार पर कई संभावनाओं में से एक को चुनने का काम करता है।

    ```c
    switch (x) {
        case 1: printf("One"); break;
        case 2: printf("Two"); break;
        default: printf("Invalid");
    }
    ```

13. **What is a loop?**

    * एक **loop** एक नियंत्रण संरचना होती है जिसका उपयोग एक ही कोड को कई बार निष्पादित करने के लिए किया जाता है जब तक कि निर्धारित शर्त पूरी नहीं हो जाती। उदाहरण: `for`, `while`, `do-while`।

14. **Types of loops in C?**

    * **`for` loop**: एक निश्चित संख्या में पुनरावृत्ति के लिए।
    * **`while` loop**: एक शर्त के सत्य होने तक पुनरावृत्ति के लिए।
    * **`do-while` loop**: कम से कम एक बार कोड निष्पादित होने के बाद शर्त की जांच करता है।

15. **Difference between `while` and `do-while`?**

    * **`while`** में शर्त पहले जांची जाती है, जबकि **`do-while`** में कोड ब्लॉक पहले निष्पादित होता है, फिर शर्त की जांच होती है। इसका मतलब है कि `do-while` कम से कम एक बार निष्पादित होता है।

16. **What is `break` and `continue`?**

    * **`break`**: लूप या स्विच से बाहर निकलने के लिए।
    * **`continue`**: लूप में अगली पुनरावृत्ति के लिए नियंत्रण को भेजता है।

17. **What is a nested loop?**

    * **Nested loop** एक लूप के भीतर अन्य लूप का उपयोग होता है। उदाहरण:

    ```c
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", j);
        }
    }
    ```

18. **What is the use of `goto`?**

    * `goto` का उपयोग प्रोग्राम के किसी अन्य हिस्से में नियंत्रण को भेजने के लिए किया जाता है, लेकिन इसका उपयोग आम तौर पर अनुशंसित नहीं है, क्योंकि यह कोड को अव्यवस्थित और पढ़ने में कठिन बना सकता है।

---

## ✅ **Functions**

19. **What is a function?**

    * **Function** एक कोड का ब्लॉक होता है जिसे बार-बार उपयोग किया जा सकता है। यह एक निर्दिष्ट कार्य करता है और आम तौर पर एक मान वापस करता है।

20. **Types of functions in C?**

    * **Built-in functions**: जो C लाइब्रेरी द्वारा प्रदान किए जाते हैं (जैसे `printf()`, `scanf()`)।
    * **User-defined functions**: जो हम खुद बनाते हैं।

21. **What is `return` statement?**

    * **`return`** स्टेटमेंट फ़ंक्शन को समाप्त करता है और यदि कोई मान है तो उसे वापस करता है। उदाहरण:

    ```c
    int add(int a, int b) {
        return a + b;
    }
    ```

22. **What is recursion?**

    * **Recursion** एक तकनीक है जिसमें एक फ़ंक्शन खुद को कॉल करता है। उदाहरण:

    ```c
    int factorial(int n) {
        if (n == 0) return 1;
        return n * factorial(n - 1);
    }
    ```

23. **What is a function prototype?**

    * **Function prototype** फ़ंक्शन की घोषणा होती है जो उसके उपयोग से पहले की जाती है, जिससे कंपाइलर को फ़ंक्शन के नाम, पैरामीटर की संख्या और प्रकार का पता चलता है।

24. **What are arguments and parameters?**

    * **Arguments** वे वास्तविक मान होते हैं जिन्हें हम फ़ंक्शन में पास करते हैं।
    * **Parameters** वे वेरिएबल्स होते हैं जो फ़ंक्शन के अंदर arguments के रूप में प्राप्त होते हैं।

25. **What is call by value?**

    * **Call by value** में फ़ंक्शन को किसी वैरिएबल का मान (value) पास किया जाता है, न कि उसकी मेमोरी लोकेशन।

---

## ✅ **Arrays & Strings**

26. **What is an array?**

    * **Array** एक डेटा संरचना है जिसमें समान प्रकार के तत्वों को संग्रहित किया जाता है।

27. **Types of arrays?**

    * **1D Array**: एकल डायमेंशन में संग्रहित डेटा।
    * **2D Array**: दो डायमेंशन (rows और columns) में संग्रहित डेटा।
    * **Multidimensional Arrays**: ज्यादा डायमेंशन में डेटा।

28. **What is a string in C?**

    * **String** एक 1D array है जो characters को स्टोर करता है और अंत में null character `\0` से समाप्त होता है।

29. **How to declare and initialize an array?**

    * **Declaration**: `int arr[5];`
    * **Initialization**: `int arr[5] = {1, 2, 3, 4, 5};`

30. **How to find length of a string?**

    * **`strlen()`** function का उपयोग किया जाता है। यह string की लंबाई (excluding `\0`) लौटाता है।

---

## ✅ **Pointers**

31. **What is a pointer?**

    * **Pointer** एक वैरिएबल होता है जो किसी अन्य वैरिएबल के मेमोरी एड्रेस को स्टोर करता है।

32. **How to declare a pointer?**

    * `int *ptr;` – यह एक integer pointer है।

33. **What is `NULL` pointer?**

    * **NULL pointer** वह pointer होता है जो किसी वैध मेमोरी लोकेशन को पॉइंट नहीं करता है, अर्थात यह किसी भी जगह को नहीं इंगीत करता है।

34. **What is pointer arithmetic?**

    * **Pointer arithmetic** में हम पॉइंटर्स पर अंकगणितीय ऑपरेशन करते हैं, जैसे `ptr++`, `ptr--`, `ptr + n` आदि।

35. **What is the use of `*` and `&`?**

    * **`*`**: यह pointer को dereference करता है, यानी उस मेमोरी लोकेशन से मान प्राप्त करता है।
    * **`&`**: यह किसी वैरिएबल का एड्रेस देता है।

36. **What is dangling pointer?**

    * **Dangling pointer** वह pointer होता है जो किसी ऐसे मेमोरी लोकेशन को पॉइंट करता है जिसे पहले `free()` किया जा चुका हो।

---

## ✅ **Structures & Unions**

37. **What is a structure?**

    * **Structure** एक कस्टम डेटा टाइप है जो विभिन्न प्रकार के डेटा को एक साथ स्टोर करता है। उदाहरण:

    ```c
    struct Student {
        int id;
        char name[50];
    };
    ```

38. ## **Syntax of defining structure?**

`struct StructName { datatype member1; datatype member2; };`

39. **What is a union?**

    * **Union** एक डेटा टाइप है जिसमें कई मेम्बर्स होते हैं लेकिन सभी मेम्बर्स को एक ही मेमोरी लोकेशन पर स्टोर किया जाता है। उदाहरण:

    ```c
    union Data {
        int i;
        float f;
        char c;
    };
    ```

40. **Difference between structure and union?**

    * **Structure** में सभी मेम्बर्स के लिए अलग-अलग मेमोरी स्थान होता है, जबकि **Union** में सभी मेम्बर्स एक ही मेमोरी स्थान को साझा करते हैं।

---

## ✅ **File Handling**

41. **What is file handling in C?**

    * C में फाइल हैंडलिंग का मतलब होता है फाइलों से डेटा पढ़ना और लिखना। C में फाइल हैंडलिंग करने के लिए फाइल पॉइंटर का उपयोग किया जाता है।

42. **Modes of file opening?**

    * **`r`**: Read mode (file must exist).
    * **`w`**: Write mode (creates new file).
    * **`a`**: Append mode.
    * **`r+`**: Read/Write mode.
    * **`w+`**: Write/Read mode.
    * **`a+`**: Append/Read mode.

43. **Functions for file I/O?**

    * `fopen()`, `fclose()`, `fread()`, `fwrite()`, `fprintf()`, `fscanf()`।

44. **Difference between text and binary file?**

    * **Text file**: यह मानव द्वारा पढ़े जाने योग्य होता है।
    * **Binary file**: इसमें डेटा बाइनरी स्वरूप में होता है और इसे सीधे मानव द्वारा नहीं पढ़ा जा सकता।

---

## ✅ **Miscellaneous**

45. **What is `typedef`?**

    * **typedef** का उपयोग किसी डेटा टाइप का एक वैकल्पिक नाम (alias) बनाने के लिए किया जाता है। उदाहरण: `typedef int Integer;`

46. **What is `enum`?**

    * **enum** एक डेटा टाइप है जो नामित स्थिरांक का एक समूह बनाता है। उदाहरण:

    ```c
    enum Day { Sunday, Monday, Tuesday };
    ```

47. **What is preprocessor directive?**

    * **Preprocessor directive** वो निर्देश होते हैं जो `#` से शुरू होते हैं, जैसे `#include`, `#define`, जो प्रोग्राम को कंपाइल होने से पहले संशोधित करते हैं।

48. **What is `static` keyword?**

    * **static** कीवर्ड का उपयोग वेरिएबल्स या फ़ंक्शन्स की जीवनकाल को प्रबंधित करने के लिए किया जाता है। यह वेरिएबल्स की मान को फ़ंक्शन कॉल के बीच बनाए रखता है।

49. **What is memory leak?**

    * **Memory leak** तब होता है जब किसी प्रोग्राम द्वारा आवंटित मेमोरी को फ्री नहीं किया जाता और वह मेमोरी भविष्य में उपयोग के लिए उपलब्ध नहीं रहती।

50. **What is the difference between `malloc()` and `calloc()`?**

    * **`malloc()`**: मेमोरी आवंटित करता है, लेकिन इसका मान अनियंत्रित होता है।
    * **`calloc()`**: मेमोरी आवंटित करता है और इसे 0 से इनिशियलाइज करता है।

---