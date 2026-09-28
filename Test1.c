Train using everything available up to today → predict tomorrow/month/year.

A proper test should be something like:

Train: 2000-2015

Validate: 2016-2018

Test: 2019-2020

or, even better, a rolling/forward-chaining evaluation.

Otherwise the model may be learning the historical environment around the event rather than genuinely forecasting it.

And there is an even more important

statistical problem

Suppose you have:

100,000 normal observations

and only

50 genuine anomalies.

A model that predicts:

"No anomaly"

every single time has 99.95% accuracy.

So someone can proudly report:

while the model is essentially useless for the thing you actually care about.

"Our ML model achieves 99.95% accuracy!"

For rare SSMIS anomalies, I would want to see things such as:

precision

recall

false-alarm rate

missed-event rate

precision-recall curve

lead time

detection probability versus lead time

false alarms per month/year

performance separately for different anomaly types

rather than simply "accuracy."

The question I would ask your manager Instead of arguing:

"Machine learning doesn't work."

I would say:

"What exactly do we mean by prediction, and what operational performance do we require?"

Then ask five very specific questions:

1. What is the prediction target?

Is the model predicting:

the next gain value?

deviation from expected gain?

an anomaly score?

probability of an anomaly?

probability of hardware failure?

These are not equivalent.

2. How far ahead?

Prediction at:

1 hour

1 day

1 week

1 month

6 months

are entirely different problems.

3. What counts as an anomaly?

Is it:

statistical deviation?

calibration threshold violation?

engineering limit? known physical failure mode?

manually confirmed event?

The answer can radically change the model's apparent performance.

4. How many false alarms are acceptable?

This is crucial.

If the system generates 100 warnings and only 2 correspond to real events, is that acceptable?

What if it misses 1 out of 10 serious anomalies?

Those are engineering decisions, not machine- learning decisions.

5. Has it been tested prospectively? This is perhaps the strongest question:

"Did the model make predictions using only and were those predictions frozen before the information that was available before the event, actual data arrived?"

If the answer is no, you haven't really demonstrated operational prediction.

I would explain it to management this way

You could say:

Machine learning should be treated as a probabilistic decision-support tool, not as an

oracle. Its performance must be demonstrated

against a clearly defined prediction target, forecast horizon, anomaly definition, and false- alarm/missed-event requirement. A model that performs well retrospectively does not

necessarily predict future SSMIS anomalies operationally.

And then:

The important question is not whether ML can find patterns in historical SSMIS data. It almost

certainly can. The question is whether those patterns provide statistically significant

predictive information about future anomalies

that was unavailable from simpler methods, and

whether that predictive performance survives a genuinely out-of-sample, time-ordered test.

That is a much harder claim.

The distinction between the two camps I think you have identified something important.

The person saying:

"ML works."

may actually mean:

"I can find correlations and construct a model with good retrospective prediction metrics."

The engineer saying:

"It doesn't work."

may mean:

"I put the model into the real operational

environment and it failed to predict the anomalies we actually care about."

Both statements can be true simultaneously.

They are answering different questions.

And this is exactly where management can get into

trouble: a retrospective statistical result gets translated into an operational guarantee.

I would therefore avoid telling your manager "ML is

Improve accuracy for technical work Upgrade to Plus and use increased reasoning to debug code, work through systems, and solve math or science problems.

Get Plus

X

+ Ask ChatGPT
