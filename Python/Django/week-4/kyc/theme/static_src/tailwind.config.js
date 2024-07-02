module.exports = {
  content: [
    // Templates within theme app (e.g. base.html)
    "../templates/**/*.html",
    // Templates in other apps
    "../../templates/**/*.html",
    // Ignore files in node_modules
    "!../../**/node_modules",
    // Include JavaScript files that might contain Tailwind CSS classes
    "../../**/*.js",
    // Include Python files that might contain Tailwind CSS classes
    "../../**/*.py",
  ],
  theme: {
    extend: {},
  },
  plugins: [
    require("@tailwindcss/forms"),
    require("@tailwindcss/typography"),
    require("@tailwindcss/aspect-ratio"),
    require("daisyui"),
  ],
};
