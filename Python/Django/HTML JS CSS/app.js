const milestoneData = JSON.parse(jsonData).data;

function loadMilestones() {
  const milestones = document.querySelector(".milestones");

  milestones.innerHTML = milestoneData
    .map((milestone) => {
      return `
        <div class="milestone border-b">
            <div class="flex">
              <div class="checkbox"><input type="checkbox" /></div>
              <div onclick="openMilestone(this, ${milestone._id})">
                <p>
                  ${milestone.name}
                  <span><i class="fas fa-chevron-down"></i></span>
                </p>
              </div>
            </div>
            <div class="hidden_panel">
              ${milestone.modules
                .map((module) => {
                  return `
                    <div class="module border-b">
                        <p>${module.name}</p>
                    </div>
                  `;
                })
                .join("")}
            </div>
        </div>`;
    })
    .join("");
}

function openMilestone(milestoneContainer, _id) {
  const currentSection = milestoneContainer.parentNode.nextElementSibling;

  const showSection = document.querySelector(".show");

  if (!currentSection.classList.contains("show") && showSection) {
    showSection.classList.remove("show");
  }

  currentSection.classList.toggle("show");

  modifyMilestone(_id);
}

function modifyMilestone(_id) {
  const milestoneImage = document.querySelector(".milestoneImage");
  const milestoneTitle = document.querySelector(".title");
  const milestoneDetails = document.querySelector(".details");

  milestoneImage.src = milestoneData[_id].image;
  milestoneTitle.innerHTML = milestoneData[_id].name;
  milestoneDetails.innerHTML = milestoneData[_id].description;
}

loadMilestones();
