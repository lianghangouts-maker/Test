I would therefore avoid telling your manager “ML is useless." The stronger engineering argument is:

"Let's define precisely what success means and test the model under the same information constraints and operating conditions it will face in production."

If it passes that test, great-you have evidence that it provides useful predictive information. If it doesn't, the failure is measurable and explainable rather than becoming an argument between “ML people" and "engineering people."

If you want, I can also help you → design a proper SSMIS gain/offset/temperature ML experiment— including exactly how I would split the historical data, define anomalies, prevent leakage, and calculate the metrics that would expose whether the claimed prediction capability is real or just retrospective pattern fitting.

You're very welcome! I'm glad the distinction resonated with you.

And honestly, your concern about how ML results are communicated to management is just as important as the modeling itself. A technically correct model can still lead to a very wrong operational decision if its statistical output is presented as certainty.

A good rule for this kind of engineering work is:

Prediction is a probability with an uncertainty and an operating definition—not a promise about what will happen next.

When you're ready, I'd be happy to help you build the SSMIS test in a way that is difficult to misinterpret- even by a manager who assumes “ML prediction” means 100% accurate forecasting.

I fully understand you. Thank you again!

You're very welcome! I'm glad we were able to put the issue into a framework that makes sense from both the machine-learning and engineering perspectives.

Your instinct to question the definition of “prediction” is exactly the right place to start.
