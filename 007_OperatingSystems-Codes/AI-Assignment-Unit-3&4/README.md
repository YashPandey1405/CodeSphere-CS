# Artificial Intelligence – Assignment 3 & 4 (CIE-374T)

## Assignment 3 (Unit 3)

### Q1a) Minimax Procedure for Game Playing & Its Extension to Multi-player Games
The **Minimax procedure** is a decision-making algorithm used in two-player games like chess or tic-tac-toe. It assumes that both players play optimally and attempts to maximize the player's minimum gain (hence "minimax"). The player tries to choose moves that maximize their minimum payoff, while assuming the opponent tries to minimize the player’s maximum payoff.

**For three or more players**, Minimax is extended to **multi-agent environments** where utilities are no longer binary. Instead of minimizing a single opponent’s advantage, the algorithm evaluates each move based on an **n-dimensional utility vector**, considering strategies and potential coalitions of all players. Algorithms like **Max-n** and **Paranoid Algorithm** are examples of such adaptations, ensuring rational play among multiple agents.

### Q1b) Image Compression Using Neural Networks
Neural networks can be used for **image compression** by training autoencoders. An **autoencoder** is a type of neural network that learns to represent input data in a smaller dimensional space (encoding), and then reconstruct it back to the original (decoding). During training, the network minimizes reconstruction loss.

Steps:
- The input image is passed through an encoder (reduces dimensionality).
- The compressed version (bottleneck layer) stores essential features.
- A decoder reconstructs the original image from this compact data.

This method is adaptive, and unlike traditional algorithms like JPEG, it learns specific image features automatically.

### Q1c) Alpha-Beta Cutoffs
**Alpha-beta pruning** is an optimization technique for the minimax algorithm. It eliminates branches that cannot possibly affect the final decision. Alpha represents the best already explored option along the path to the maximizer, and beta for the minimizer.

- **If alpha ≥ beta**, the branch is pruned.
- It significantly reduces the number of nodes evaluated, improving efficiency.
- Best-case time complexity becomes **O(b^(d/2))**, where *b* is the branching factor and *d* is the depth.

### Q2d) Performance and Limitations of Backpropagation Learning
**Performance:**
- Efficient and widely used for training neural networks.
- Learns complex nonlinear patterns.
- Works well in tasks like speech recognition, image classification, etc.

**Limitations:**
- Requires a large amount of labeled data.
- Prone to overfitting.
- Sensitive to local minima and learning rate.
- Not interpretable (acts like a black box).

### Q2e) Challenges in Understanding Semantics and Context in NLP
Understanding **semantics** and **context** in NLP is difficult due to:
- **Ambiguity**: Words can have multiple meanings (e.g., “bank”).
- **Context-dependence**: Meaning changes with usage (e.g., sarcasm).
- **Syntax vs Semantics**: Grammatically correct sentences may lack meaning.
- **World Knowledge**: Machines lack real-world knowledge and common sense.

Advancements like **transformer models (e.g., BERT, GPT)** aim to address these issues.

### Q2f) EBL vs Learning by Analogy

**Explanation-Based Learning (EBL):**
- Involves generalizing a single example using domain knowledge.
- Learns by forming explanations and creating rules.

**Learning by Analogy:**
- Involves comparing a new situation with past similar examples.
- Focuses on structural similarities rather than rules.

**Example:**
- EBL: A robot learns that to open a door, it must turn the knob by reasoning it needs access to another room.
- Analogy: If the robot opened a cupboard before by pulling, it might try pulling on the door using analogy.

---

## Assignment 4 (Unit 4)

### Q3a) Fuzzy Control System with Washing Machine Example
A **Fuzzy Control System** deals with imprecise inputs using **fuzzy logic** rather than binary logic. It uses a **fuzzy inference system (FIS)** to make decisions.

**Block Diagram Includes:**
1. **Fuzzification** (convert crisp inputs to fuzzy sets)
2. **Knowledge Base** (rules + membership functions)
3. **Inference Engine** (applies rules to fuzzy inputs)
4. **Defuzzification** (convert output to crisp value)

**Example - Washing Machine:**
- Inputs: Dirtiness level & Load size  
- Output: Wash time  
- Rule: IF dirtiness is HIGH AND load is LARGE THEN wash time is LONG

### Q3b) Meta Knowledge in Rule-Based Expert Systems
**Meta-knowledge** is knowledge about knowledge. In rule-based systems, it refers to knowing how to apply the rules or strategies for controlling inference.

**Representation:**
- Encoded as **control rules** or **heuristics**.
- Helps in prioritizing rules, conflict resolution, and managing inference paths.
- Used in systems like MYCIN to improve efficiency.

### Q4a) Significance of Expert-System Approach vs General AI
**Expert systems** replicate human expertise in narrow domains (e.g., medical diagnosis). They were the first practical AI applications showing real-world utility.

**Significance:**
- Focused on domain-specific knowledge.
- Solved real-world problems where general AI struggled.
- Laid groundwork for today’s AI systems.

**Compared to general AI:**
- Expert systems are rule-based, not flexible or adaptive.
- General AI aims for human-like reasoning across domains but is still largely theoretical.

### Q4b) Is AI "Intelligent"? How Is It Different from Human Intelligence?
Calling AI systems “intelligent” is often misleading:

- **AI** performs tasks using statistical patterns and lacks consciousness, emotion, and self-awareness.
- **Human intelligence** involves reasoning, emotions, ethics, and adaptability.

**Differences:**
- AI lacks **intentionality and understanding**.
- AI depends on data; humans rely on intuition and creativity.
- AI is fast and accurate in narrow tasks, but humans generalize better.