# GPIO Pins

| GPIO No. | Label on Board | Safe for Input | Safe for Output | Special Notes                                      |
| -------- | -------------- | -------------- | --------------- | -------------------------------------------------- |
| **0**    | D0 / IO0       | ✔              | ⚠               | Boot mode pin — avoid pulling LOW at startup       |
| **1**    | TX0            | ✔              | ⚠               | Used for Serial TX (USB upload)                    |
| **2**    | D2 / IO2       | ✔              | ⚠               | Boot mode pin — avoid pulling HIGH/LOW incorrectly |
| **3**    | RX0            | ✔              | ⚠               | Used for Serial RX (USB upload)                    |
| **4**    | D4 / IO4       | ✔              | ✔               | Safe general-use pin                               |
| **5**    | D5 / IO5       | ✔              | ✔               | Safe general-use pin                               |
| **12**   | D12 / IO12     | ✔              | ⚠               | Boot strapping pin — avoid pulling HIGH at boot    |
| **13**   | D13 / IO13     | ✔              | ✔               | Safe                                               |
| **14**   | D14 / IO14     | ✔              | ✔               | Safe                                               |
| **15**   | D15 / IO15     | ✔              | ⚠               | Boot mode pin — avoid pulling HIGH at boot         |
| **16**   | D16 / IO16     | ✔              | ✔               | Safe                                               |
| **17**   | D17 / IO17     | ✔              | ✔               | Safe                                               |
| **18**   | D18 / IO18     | ✔              | ✔               | Safe                                               |
| **19**   | D19 / IO19     | ✔              | ✔               | Safe                                               |
| **21**   | D21 / IO21     | ✔              | ✔               | Safe                                               |
| **22**   | D22 / IO22     | ✔              | ✔               | Safe                                               |
| **23**   | D23 / IO23     | ✔              | ✔               | Safe                                               |
| **25**   | D25 / IO25     | ✔ (ADC)        | ✔               | ADC input capable                                  |
| **26**   | D26 / IO26     | ✔ (ADC)        | ✔               | ADC input capable                                  |
| **27**   | D27 / IO27     | ✔ (ADC)        | ✔               | ADC input capable                                  |
| **32**   | D32 / IO32     | ✔ (ADC)        | ✔               | ADC input capable                                  |
| **33**   | D33 / IO33     | ✔ (ADC)        | ✔               | ADC input capable                                  |
| **34**   | D34 / IO34     | ✔ (ADC)        | ❌               | Input only                                         |
| **35**   | D35 / IO35     | ✔ (ADC)        | ❌               | Input only                                         |
| **36**   | VP / IO36      | ✔ (ADC)        | ❌               | Input only                                         |
| **39**   | VN / IO39      | ✔ (ADC)        | ❌               | Input only                                         |



# “Avoid 0, 2, 15 for outputs, avoid 34–39 for outputs, everything else is fair game.”

Tnaks
